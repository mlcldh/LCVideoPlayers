/*----------------------------------------------------------------------------------------------
 *
 * This file is Arcvideo's property. It contains Arcvideo's trade secret, proprietary and
 * confidential information.
 *
 * The information and code contained in this file is only for authorized Arcvideo employees
 * to design, create, modify, or review.
 *
 * DO NOT DISTRIBUTE, DO NOT DUPLICATE OR TRANSMIT IN ANY FORM WITHOUT PROPER AUTHORIZATION.
 *
 * If you are not an intended recipient of this file, you must not copy, distribute, modify,
 * or take any action in reliance on it.
 *
 * If you have received this file in error, please immediately notify Arcvideo and
 * permanently delete the original and any copy of any file and any printout thereof.
 *
 *-------------------------------------------------------------------------------------------------*/
/*
 * History
 *
 *  05.03.2016 Yang Yang
 * - initial version
 *
 */


#ifndef AMMFPlayerError_h
#define AMMFPlayerError_h

/*ERROR CODE*/
#define MEDIA_ERROR_NONE            0
#define MEDIA_ERROR_SOURCE_BASE     100000
#define MEDIA_ERROR_PLAYER_BASE     200000

#define MEDIA_ERROR_UNKNOWN                     1
#define MEDIA_ERROR_SOURCE_UNSUPPORTED_SCHEME       MEDIA_ERROR_SOURCE_BASE + 1
#define MEDIA_ERROR_SOURCE_NETWORK_CONNECTFAIL      MEDIA_ERROR_SOURCE_BASE + 2
#define MEDIA_ERROR_SOURCE_STREAM_OPEN              MEDIA_ERROR_SOURCE_BASE + 3
#define MEDIA_ERROR_SOURCE_STREAM_SEEK              MEDIA_ERROR_SOURCE_BASE + 4
#define MEDIA_ERROR_SOURCE_DATARECEIVE_TIMEOUT      MEDIA_ERROR_SOURCE_BASE + 5
#define MEDIA_ERROR_SOURCE_FORMAT_UNSUPPORTED       MEDIA_ERROR_SOURCE_BASE + 6
#define MEDIA_ERROR_SOURCE_FORMAT_MALFORMED         MEDIA_ERROR_SOURCE_BASE + 7
#define MEDIA_ERROR_SOURCE_DNS_RESOLVE              MEDIA_ERROR_SOURCE_BASE + 8
#define MEDIA_ERROR_SOURCE_DNS_RESOLVE_TIMEOUT      MEDIA_ERROR_SOURCE_BASE + 9
#define MEDIA_ERROR_SOURCE_NETWORK_CONNECTIMEOUT    MEDIA_ERROR_SOURCE_BASE + 10
#define MEDIA_ERROR_SOURCE_DATARECEIVE_FAIL         MEDIA_ERROR_SOURCE_BASE + 11
#define MEDIA_ERROR_SOURCE_DATASEND_TIMEOUT         MEDIA_ERROR_SOURCE_BASE + 12
#define MEDIA_ERROR_SOURCE_DATASEND_FAIL            MEDIA_ERROR_SOURCE_BASE + 13
#define MEDIA_ERROR_SOURCE_DATAERROR_HTML           MEDIA_ERROR_SOURCE_BASE + 14
#define MEDIA_ERROR_SOURCE_BAD_VALUE                MEDIA_ERROR_SOURCE_BASE + 15
#define MEDIA_ERROR_SOURCE_DATARECEIVE_NOBODY       MEDIA_ERROR_SOURCE_BASE + 16
#define MEDIA_ERROR_SOURCE_SEEK_BEYONDFILESIZE      MEDIA_ERROR_SOURCE_BASE + 17

#define MEDIA_ERROR_SOURCE_HTTP_RESP_400            MEDIA_ERROR_SOURCE_BASE + 400
#define MEDIA_ERROR_SOURCE_HTTP_RESP_401            MEDIA_ERROR_SOURCE_BASE + 401
#define MEDIA_ERROR_SOURCE_HTTP_RESP_403            MEDIA_ERROR_SOURCE_BASE + 403
#define MEDIA_ERROR_SOURCE_HTTP_RESP_404            MEDIA_ERROR_SOURCE_BASE + 404
#define MEDIA_ERROR_SOURCE_HTTP_RESP_408            MEDIA_ERROR_SOURCE_BASE + 408
#define MEDIA_ERROR_SOURCE_HTTP_RESP_500            MEDIA_ERROR_SOURCE_BASE + 500
#define MEDIA_ERROR_SOURCE_HTTP_RESP_503            MEDIA_ERROR_SOURCE_BASE + 503

#define MEDIA_ERROR_PLAYER_DISPLAY_INIT_FAILED      MEDIA_ERROR_PLAYER_BASE + 1
#define MEDIA_ERROR_PLAYER_NOAUDIO_VIDEOUNSUPPORT   MEDIA_ERROR_PLAYER_BASE + 2
#define MEDIA_ERROR_PLAYER_NOVIDEO_AUDIOUNSUPPORT   MEDIA_ERROR_PLAYER_BASE + 3
#define MEDIA_ERROR_PLAYER_AVCODEC_UNSUPPORT        MEDIA_ERROR_PLAYER_BASE + 4
#define MEDIA_ERROR_PLAYER_OPERATION_CANNOTEXECUTE  MEDIA_ERROR_PLAYER_BASE + 5

#define LICENSE_ERR                                     MEDIA_ERROR_NONE
#define LICENSE_ERR_DISABLE_APP_NAME					(LICENSE_ERR+1)	//app name错误
#define LICENSE_ERR_DISABLE_AUTHENTICATE_FAIL			(LICENSE_ERR+2)	//验证不通过
#define LICENSE_ERR_DISABLE_INVALID_PARAM				(LICENSE_ERR+3) //输入参数无效
#define LICENSE_ERR_DISABLE_PARAMETER_DISACCORD			(LICENSE_ERR+4)  //参数不一致
#define LICENSE_ERR_DISABLE_DIRECTORY_ERR				(LICENSE_ERR+5)  //保存license的路径错误
#define LICENSE_ERR_DISABLE_MEM_NOT_ENOUGH				(LICENSE_ERR+6)	//内存不足
#define LICENSE_ERR_DISABLE_SDK_PLANTFORM_NO_SUPPORT	(LICENSE_ERR+7)	//sdk plantform not support
#define LICENSE_ERR_DISABLE_SDK_NO_EXITS				(LICENSE_ERR+8)	//要查询的sdk不存在
#define LICENSE_ERR_DISABLE_NO_UPDATE					(LICENSE_ERR+11)	//license一直没被更新过
#define LICENSE_ERR_DISABLE_NETWORK						(LICENSE_ERR+12) //网络链接错误
#define LICENSE_ERR_DISABLE_DOWNLOAD_DATA_FORMAT		(LICENSE_ERR+13)  //后台下载的数据格式不对

#define LICENSE_ERR_ENABLE_NO_UPDATE					(LICENSE_ERR+21)	//license一直没被更新过
#define LICENSE_ERR_ENABLE_NETWORK						(LICENSE_ERR+22) //网络链接错误
#define LICENSE_ERR_ENABLE_DOWNLOAD_DATA_FORMAT         (LICENSE_ERR+23)  //后台下载的数据格式不对
#define LICENSE_ERR_ENABLE_SDK_EXPIREDATE				(LICENSE_ERR+31)	//sdk expiredate

/*Warning Info*/
#define MEDIA_INFO_SPLITTER_NOVIDEO                 0x8001
#define MEDIA_INFO_SPLITTER_NOAUDIO                 0x8002
#define MEDIA_INFO_VCODEC_UNSUPPORTVIDEO            0x500b
#define MEDIA_INFO_ACODEC_UNSUPPORTAUDIO            0x500c
#define MEDIA_INFO_VCODEC_DECODE_ERROR              0x3009
#define MEDIA_INFO_ACODEC_DECODE_ERROR              0x3005
#define MEDIA_INFO_ADVERTISEMENT_BEGIN              0x8010
#define MEDIA_INFO_ADVERTISEMENT_END                0x8011
//multi-bandwidth switch same, no need switch
#define MEDIA_INFO_BANDWIDTH_SWITCH_SAME            0x8021
//multi-bandwidth switch success
#define MEDIA_INFO_BANDWIDTH_SWITCH_SUCCESS         0x8022
//multi-bandwidth switch failed
#define MEDIA_INFO_BANDWIDTH_SWITCH_FAILED          0x8023
//multi-bandwidth switch invalid index
#define MEDIA_INFO_BANDWIDTH_SWITCH_INVALID         0x8024

#endif /* AMMFPlayerError_h */
