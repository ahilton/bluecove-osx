/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_intel_bluetooth_BluetoothStackWIDCOMM */

#ifndef _Included_com_intel_bluetooth_BluetoothStackWIDCOMM
#define _Included_com_intel_bluetooth_BluetoothStackWIDCOMM
#ifdef __cplusplus
extern "C" {
#endif
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_ATTR_RETRIEVABLE_MAX
#define com_intel_bluetooth_BluetoothStackWIDCOMM_ATTR_RETRIEVABLE_MAX 256L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_RECEIVE_MTU_MAX
#define com_intel_bluetooth_BluetoothStackWIDCOMM_RECEIVE_MTU_MAX 1024L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_NULL_DESC_TYPE
#define com_intel_bluetooth_BluetoothStackWIDCOMM_NULL_DESC_TYPE 0L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_UINT_DESC_TYPE
#define com_intel_bluetooth_BluetoothStackWIDCOMM_UINT_DESC_TYPE 1L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_TWO_COMP_INT_DESC_TYPE
#define com_intel_bluetooth_BluetoothStackWIDCOMM_TWO_COMP_INT_DESC_TYPE 2L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_UUID_DESC_TYPE
#define com_intel_bluetooth_BluetoothStackWIDCOMM_UUID_DESC_TYPE 3L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_TEXT_STR_DESC_TYPE
#define com_intel_bluetooth_BluetoothStackWIDCOMM_TEXT_STR_DESC_TYPE 4L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_BOOLEAN_DESC_TYPE
#define com_intel_bluetooth_BluetoothStackWIDCOMM_BOOLEAN_DESC_TYPE 5L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_DATA_ELE_SEQ_DESC_TYPE
#define com_intel_bluetooth_BluetoothStackWIDCOMM_DATA_ELE_SEQ_DESC_TYPE 6L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_DATA_ELE_ALT_DESC_TYPE
#define com_intel_bluetooth_BluetoothStackWIDCOMM_DATA_ELE_ALT_DESC_TYPE 7L
#undef com_intel_bluetooth_BluetoothStackWIDCOMM_URL_DESC_TYPE
#define com_intel_bluetooth_BluetoothStackWIDCOMM_URL_DESC_TYPE 8L
/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    isNativeCodeLoaded
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_isNativeCodeLoaded
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getLibraryVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getLibraryVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    detectBluetoothStack
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_detectBluetoothStack
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    enableNativeDebug
 * Signature: (Ljava/lang/Class;Z)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_enableNativeDebug
  (JNIEnv *, jobject, jclass, jboolean);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    initializeImpl
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_initializeImpl
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    uninitialize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_uninitialize
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getLocalDeviceBluetoothAddress
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getLocalDeviceBluetoothAddress
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getLocalDeviceName
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getLocalDeviceName
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getDeviceClassImpl
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getDeviceClassImpl
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    isStackServerUp
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_isStackServerUp
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    isLocalDeviceDiscoverable
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_isLocalDeviceDiscoverable
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    isLocalDevicePowerOn
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_isLocalDevicePowerOn
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getBTWVersionInfo
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getBTWVersionInfo
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getDeviceVersion
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getDeviceVersion
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getDeviceManufacturer
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getDeviceManufacturer
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    authenticateRemoteDeviceImpl
 * Signature: (JLjava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_authenticateRemoteDeviceImpl
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    removeAuthenticationWithRemoteDeviceImpl
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_removeAuthenticationWithRemoteDeviceImpl
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    isRemoteDeviceConnected
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_isRemoteDeviceConnected
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getRemoteDeviceLinkMode
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getRemoteDeviceLinkMode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getRemoteDeviceVersionInfo
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getRemoteDeviceVersionInfo
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    setSniffMode
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_setSniffMode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    cancelSniffMode
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_cancelSniffMode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getRemoteDeviceRSSI
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getRemoteDeviceRSSI
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    runDeviceInquiryImpl
 * Signature: (Lcom/intel/bluetooth/DeviceInquiryRunnable;Lcom/intel/bluetooth/DeviceInquiryThread;ILjavax/bluetooth/DiscoveryListener;)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_runDeviceInquiryImpl
  (JNIEnv *, jobject, jobject, jobject, jint, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    deviceInquiryCancelImpl
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_deviceInquiryCancelImpl
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getRemoteDeviceFriendlyName
 * Signature: (JII)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getRemoteDeviceFriendlyName
  (JNIEnv *, jobject, jlong, jint, jint);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    peekRemoteDeviceFriendlyName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_peekRemoteDeviceFriendlyName
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    runSearchServicesImpl
 * Signature: (Lcom/intel/bluetooth/SearchServicesThread;[BJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_runSearchServicesImpl
  (JNIEnv *, jobject, jobject, jbyteArray, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    cancelServiceSearchImpl
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_cancelServiceSearchImpl
  (JNIEnv *, jobject);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getServiceAttribute
 * Signature: (IJ)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getServiceAttribute
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    isServiceRecordDiscoverable
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_isServiceRecordDiscoverable
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    connectionRfOpenClientConnectionImpl
 * Signature: (JIZZI)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_connectionRfOpenClientConnectionImpl
  (JNIEnv *, jobject, jlong, jint, jboolean, jboolean, jint);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    closeRfCommPortImpl
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_closeRfCommPortImpl
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    getConnectionRfRemoteAddress
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_getConnectionRfRemoteAddress
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    connectionRfRead
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_connectionRfRead__J
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    connectionRfRead
 * Signature: (J[BII)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_connectionRfRead__J_3BII
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    connectionRfReadAvailable
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_connectionRfReadAvailable
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    connectionRfWriteImpl
 * Signature: (J[BII)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_connectionRfWriteImpl
  (JNIEnv *, jobject, jlong, jbyteArray, jint, jint);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    rfServerOpenImpl
 * Signature: ([B[BZLjava/lang/String;ZZ)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_rfServerOpenImpl
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jboolean, jstring, jboolean, jboolean);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    rfServerSCN
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_rfServerSCN
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    sdpServiceAddAttribute
 * Signature: (JCIS[B)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_sdpServiceAddAttribute
  (JNIEnv *, jobject, jlong, jchar, jint, jshort, jbyteArray);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    sdpServiceAddServiceClassIdList
 * Signature: (JC[[B)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_sdpServiceAddServiceClassIdList
  (JNIEnv *, jobject, jlong, jchar, jobjectArray);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    rfServerAcceptAndOpenRfServerConnection
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_rfServerAcceptAndOpenRfServerConnection
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    connectionRfCloseServerConnection
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_connectionRfCloseServerConnection
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    rfServerCloseImpl
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_rfServerCloseImpl
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2OpenClientConnectionImpl
 * Signature: (JIZZIII)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2OpenClientConnectionImpl
  (JNIEnv *, jobject, jlong, jint, jboolean, jboolean, jint, jint, jint);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2CloseClientConnection
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2CloseClientConnection
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2ServerOpenImpl
 * Signature: ([BZZLjava/lang/String;III)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2ServerOpenImpl
  (JNIEnv *, jobject, jbyteArray, jboolean, jboolean, jstring, jint, jint, jint);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2ServerPSM
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2ServerPSM
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2ServerAcceptAndOpenServerConnection
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2ServerAcceptAndOpenServerConnection
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2CloseServerConnection
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2CloseServerConnection
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2ServerCloseImpl
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2ServerCloseImpl
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2GetReceiveMTU
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2GetReceiveMTU
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2GetTransmitMTU
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2GetTransmitMTU
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2Ready
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2Ready
  (JNIEnv *, jobject, jlong);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2Receive
 * Signature: (J[B)I
 */
JNIEXPORT jint JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2Receive
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2Send
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2Send
  (JNIEnv *, jobject, jlong, jbyteArray);

/*
 * Class:     com_intel_bluetooth_BluetoothStackWIDCOMM
 * Method:    l2RemoteAddress
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_intel_bluetooth_BluetoothStackWIDCOMM_l2RemoteAddress
  (JNIEnv *, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif
