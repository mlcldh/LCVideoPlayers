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
 *  06.08.2012 Yang Yang
 * - initial version
 *
 */

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <UIKit/UIKit.h>
#import "amconstant.h"
#include "amcomdef.h"
#import "AMMFPlayerError.h"
#import <AVFoundation/AVFoundation.h>

typedef enum
{
    DISPLAYMODE_FITIN = 0,
    DISPLAYMODE_FITOUT,
    DISPLAYMODE_STRETCH
}DisplayMode;
typedef enum
{
    SWITCHMODE_AUTO = 0,
    SWITCHMODE_MANUAL
}ARC_BANDWIDTH_SWITCH_MODE;

@interface ARCPlayer : NSObject

/**
 Init an ARCPlayer

 @param accessKey get from Arcvideo Cloud
 @param accessSecret get from Arcvideo Cloud
 @param appKey get from Arcvideo Cloud
 @return return an ARCPlayer Object
 */
-(instancetype)initWithAccessKey: (NSString*)accessKey
                    accessSecret: (NSString*)accessSecret
                          appKey: (NSString*)appKey;

/**
 *  Create a playerEngine
 *
 *  @param mainScreen Bounds of the device's internal screen
 *  @param videoFrame Bounds of the frame that will display the video
 *  @param view       view handle on which the frame is displayed
 *
 *  @return return true while success
 */
-(BOOL)createPlayerEngine:(CGRect)mainScreen
           withVideoframe:(CGRect)videoFrame
                 withView:(UIView*)view;

/**
 *  Open file 
 *
 *  @param filePath the file path to play, must not be nil
 *  @param header   http header, can be nil
 *
 *  @return return MEDIA_ERROR_NONE while success, otherwise see AMMFPlayerError.h
 */
-(NSUInteger)openWithPath:(NSString*)filePath andHeader:(NSString*)header;

/**
 *  Start to play or return from pause
 *
 *  @return return true while success
 */
-(BOOL)play;

/**
 *  Pause the player
 *
 *  @return return true while success
 */
-(BOOL)pause;

/**
 *  Stop the player
 *
 *  @return return true while success
 */
-(BOOL)stop;

/**
 *  Seek to play at a specified position
 *
 *  @param timestamp the position that is seek to, measured as millisecond
 *
 *  @return return true while success
 */
-(BOOL)seek:(MDWord)timestamp;

/**
 *  Get current position
 *
 *  @return return current position
 */
-(MDWord)getPositon;

/**
 *  Get bitrate
 *
 *  @return return bitrate
 */
-(MDWord)getBitrate;

/**
 *  Get video size
 *
 *  @return return video size
 */
-(CGSize)getVideoSize;

/**
 *  Get duration
 *
 *  @return return duration
 */

-(MDWord)getDuration;

/**
 *  Display the video in a new rect
 *
 *  @param mainScreen Bounds of the device's internal screen
 *  @param newFrame   Bounds of the new frame
 *
 *  @return return true while success
 */
-(BOOL)changeScreen:(CGRect)mainScreen andFrame:(CGRect)newFrame;

/**
 *  Set player codec mode
 *
 *  @param bHardware 0 means software decoder, 1 means hardware decoder
 *
 *  @return return true while success
 */
-(BOOL)setPlayerCodecMode: (BOOL)bHardware;

/**
 *  Return deocder mode
 *
 *  @return return true if use hardware decoder
 */
-(BOOL)isHWDecoder;

/**
 Set volome

 @param volume volume percentage form 0 to 100
 @return return true while success
 */
-(BOOL)setVolume:(MLong)volume;
/**
 *  Set params
 *
 *  @param connectTimeout connect timeout, measured as millisecond
 *  @param receiveTimeout receive timeout, measured as millisecond
 *
 *  @return return true while success
 */
-(BOOL)setConnectTimeOut: (MDWord)connectTimeout
          ReceiveTimeOut: (MDWord)receiveTimeout;

/**
 *  设置与buffering状态相关的参数
 *
 *  @param initBufferingTime 播放器启动之后需要先接收[initBufferingTime]毫秒的数据才能开始播放
 *  @param playingTime 播放器在播放过程中进入buffering状态之后，需要接收[playingTime]毫秒的数据才能恢复播放
 *  @param maxBufferingTime 播放器的数据队列中存储超过[maxBufferingTime]毫秒的数据之后会暂停接收数据
 *
 *  @return return true while success
 */
-(BOOL)setInitBufferingTime: (MDWord)initBufferingTime
                PlayingTime: (MDWord)playingTime
           MaxBufferingTime: (MDWord)maxBufferingTime;
/**
 *  Set CustomID and ContentID
 *
 *  @param customID  custom ID
 *  @param contentID content ID
 *
 *  @return return true while success
 */
-(BOOL)setCustomID: (NSString*)customID andContentID: (NSString*)contentID;

/**
 *  Set value for specifed key
 *
 *  @param value use NSString at present
 *  @param key   use AMMFPlayerAppCollectData at present
 *
 *  @return return true while success
 */
-(BOOL)setValue: (id)value forKey:(NSString *)key;

-(BOOL)setDisplayDataCallback:(void*)callback;

/**
 *  Set Display Mode, must be called after createPlayerEngine:withVideoframe:withView: and before openWithPath:andHeader: 
 *
 *  @param mode Display Mode
 *
 *  @return return true while success
 */
-(BOOL)setDisplayMode: (DisplayMode)mode;

-(BOOL)setPlayRate: (MFloat)playRate;

-(void)setBandwidthSwitchType: (ARC_BANDWIDTH_SWITCH_MODE)type;

-(void)setBandwidthByIndex: (int)index;

-(int)getBandwidthCount;

-(int)getCurrentBandwidth;

-(MVoid*)getDisplayHandle;

-(void)setBackgroundColor;

-(void)setVRMode:(BOOL)isVRMode;

-(NSString*)GetVersionInfo;

-(void)applicationWillResignActive;

-(void)applicationDidBecomeActive;

@end
