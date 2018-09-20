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
 *  02.13.2012 Yang Yang
 * - initial version
 *
 */

#ifndef testMediaPlayer_amconstant_h
#define testMediaPlayer_amconstant_h


#define __NOLOG__

#ifdef __NOLOG__
#define NSLog(...)
#endif

/*Status sent by notification*/
#define ENGINE_STATUS_PLAY              1
#define ENGINE_STATUS_PAUSE             2
#define ENGINE_STATUS_STOP              3
#define ENGINE_STATUS_READY             4
#define ENGINE_STATUS_VIDEO_SIZE_CHANGE 5
#define ENGINE_STATUS_MESSAGE           6
/*Status for streaming*/
#define ENGINE_STATUS_CONNECTING    0x11
#define ENGINE_STATUS_BUFFERING		0x12

/*Key name sent by notification*/
#define STATECHANGE     @"StateChange"
#define STATE           @"State"

extern NSString* const AMMFPlayerAppCollectData;

#endif
