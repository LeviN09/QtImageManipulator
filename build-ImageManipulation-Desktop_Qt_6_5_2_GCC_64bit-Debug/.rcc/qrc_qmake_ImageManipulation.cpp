/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.5.2
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // /home/levi/Documents/Programming/Work/QtProj/build-ImageManipulation-Desktop_Qt_6_5_2_GCC_64bit-Debug/ImageManipulation/qmldir
  0x0,0x0,0x0,0x6f,
  0x6d,
  0x6f,0x64,0x75,0x6c,0x65,0x20,0x49,0x6d,0x61,0x67,0x65,0x4d,0x61,0x6e,0x69,0x70,
  0x75,0x6c,0x61,0x74,0x69,0x6f,0x6e,0xa,0x74,0x79,0x70,0x65,0x69,0x6e,0x66,0x6f,
  0x20,0x61,0x70,0x70,0x49,0x6d,0x61,0x67,0x65,0x4d,0x61,0x6e,0x69,0x70,0x75,0x6c,
  0x61,0x74,0x69,0x6f,0x6e,0x2e,0x71,0x6d,0x6c,0x74,0x79,0x70,0x65,0x73,0xa,0x70,
  0x72,0x65,0x66,0x65,0x72,0x20,0x3a,0x2f,0x49,0x6d,0x61,0x67,0x65,0x4d,0x61,0x6e,
  0x69,0x70,0x75,0x6c,0x61,0x74,0x69,0x6f,0x6e,0x2f,0xa,0x4d,0x61,0x69,0x6e,0x20,
  0x31,0x2e,0x30,0x20,0x4d,0x61,0x69,0x6e,0x2e,0x71,0x6d,0x6c,0xa,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // ImageManipulation
  0x0,0x11,
  0x1,0x18,0xd3,0xfe,
  0x0,0x49,
  0x0,0x6d,0x0,0x61,0x0,0x67,0x0,0x65,0x0,0x4d,0x0,0x61,0x0,0x6e,0x0,0x69,0x0,0x70,0x0,0x75,0x0,0x6c,0x0,0x61,0x0,0x74,0x0,0x69,0x0,0x6f,0x0,0x6e,
  
    // qmldir
  0x0,0x6,
  0x7,0x84,0x2b,0x2,
  0x0,0x71,
  0x0,0x6d,0x0,0x6c,0x0,0x64,0x0,0x69,0x0,0x72,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/ImageManipulation
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/ImageManipulation/qmldir
  0x0,0x0,0x0,0x28,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x8a,0xd7,0x7b,0xd9,0x28,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_qmake_ImageManipulation)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_qmake_ImageManipulation)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qmake_ImageManipulation)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qmake_ImageManipulation)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

#ifdef __clang__
#   pragma clang diagnostic push
#   pragma clang diagnostic ignored "-Wexit-time-destructors"
#endif

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_qmake_ImageManipulation)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_qmake_ImageManipulation)(); }
   } dummy;
}

#ifdef __clang__
#   pragma clang diagnostic pop
#endif
