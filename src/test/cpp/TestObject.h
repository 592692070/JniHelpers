#ifndef __TestObject_h__
#define __TestObject_h__

#include "JniHelpers.h"
#include "JniHelpersTest.h"

using namespace spotify::jni;

class EXPORT TestObject : public ClassWrapper {
public:
  TestObject();
  TestObject(JNIEnv *env);
  ~TestObject() {}

  const char* getCanonicalName() const {
    return MAKE_CANONICAL_NAME(PACKAGE, TestObject);
  }

  void initialize(JNIEnv *env);
  void mapFields();

public:
  JavaString string;
  int i;
  short s;
  float f;
  double d;
  bool z;
  // TODO: byte[] b;
};

#endif // __TestObject_h__
