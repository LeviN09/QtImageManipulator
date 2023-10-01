import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Layouts
import Qt5Compat.GraphicalEffects
import QtQuick.Dialogs
import ImageLoader

Window {
    visible: true
    width: 600
    height: 500
    title: "Image Loader"

    Rectangle {
        color: "lightgray"
        anchors.fill: parent

        ColumnLayout {
            anchors.fill: parent

            TextField {
                id: urlInput
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                placeholderText: "Enter Image URL"
                Layout.fillWidth: true
            }

            Button {
                text: "Load Image"
                Layout.minimumHeight: 20
                Layout.minimumWidth: 20
                Layout.fillHeight: false
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                onClicked:
                {
                    var imageUrl = urlInput.text;
                    loadedImage.source = "image://myimageprovider/" + imageUrl;

                    if (loadedImage.status === Image.Error)
                    {
                        urlInput.text = "Error loading image from URL";
                    }
                }
            }

            RowLayout {
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                ColumnLayout {
                    Slider {
                        id: hue
                        stepSize: 0.1
                        from: 0
                        to: 1

                    }
                    Text {
                        text: "Hue"
                        Layout.fillWidth: false
                        Layout.alignment: Qt.AlignHCenter | Qt.AlignTop

                    }
                }

                ColumnLayout {
                    Slider {
                        id: sat
                        stepSize: 0.1
                        from: 0
                        to: 1
                    }
                    Text {
                        text: "Saturation"
                        Layout.fillWidth: false
                        Layout.alignment: Qt.AlignHCenter | Qt.AlignTop

                    }
                }

                ColumnLayout {
                    Slider {
                        id: light
                        stepSize: 0.1
                        from: -1
                        to: 1
                    }
                    Text {
                        text: "Lightness"
                        Layout.fillWidth: false
                        Layout.alignment: Qt.AlignHCenter | Qt.AlignTop

                    }
                }
            }

            Item {
                id: item1
                width: 400
                height: 300
                Layout.minimumHeight: 300
                Layout.minimumWidth: 400
                Layout.fillWidth: true
                Layout.maximumHeight: 300
                Layout.maximumWidth: 400
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                Layout.fillHeight: true
                Image {
                    id: loadedImage
                    visible: true
                    anchors.fill: parent
                    horizontalAlignment: Image.AlignHCenter
                    verticalAlignment: Image.AlignVCenter
                    Layout.maximumHeight: 300
                    Layout.maximumWidth: 400
                    Layout.fillWidth: true
                    Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                    fillMode: Image.PreserveAspectFit

                }

                Colorize {
                    id: colorize
                    anchors.fill: loadedImage
                    source: loadedImage
                    hue: hue.value
                    saturation: sat.value
                    lightness: light.value
                }
            }

            RowLayout {
                Layout.fillWidth: true
                Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                Button {
                    text: "Save Image"
                    Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter
                    onClicked: {
                        try {
                        colorize.grabToImage(function(result) {
                                                   result.saveToFile(place.text);
                                               });
                        }
                        catch (e) {

                        }
                    }
                }

                TextField {
                    id: place
                    placeholderText: "Enter Image Save Name"
                    Layout.fillWidth: true
                    Layout.minimumWidth: 300
                    Layout.alignment: Qt.AlignHCenter | Qt.AlignVCenter

                }
            }




        }
    }


    Popup {
        id: popup
        x: 100
        y: 100
        width: 200
        height: 300
        modal: true
        focus: true
        closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent

    }
}


