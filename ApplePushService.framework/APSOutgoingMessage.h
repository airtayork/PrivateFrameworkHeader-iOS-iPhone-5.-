/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@class NSDictionary, NSMutableDictionary, NSString;

@interface APSOutgoingMessage : NSObject  {
    NSMutableDictionary *_objects;
}

@property(retain) NSString * topic;
@property(retain) NSDictionary * userInfo;
@property unsigned int timeout;
@property(getter=isCritical) BOOL critical;
@property int payloadFormat;
@property unsigned int identifier;


- (unsigned int)messageID;
- (void)setTimeout:(unsigned int)arg1;
- (unsigned int)timeout;
- (BOOL)isCritical;
- (BOOL)wasSent;
- (BOOL)hasTimedOut;
- (int)payloadFormat;
- (id)data;
- (BOOL)wasCancelled;
- (void)setMessageID:(unsigned int)arg1;
- (void)setSent:(BOOL)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setCancelled:(BOOL)arg1;
- (unsigned int)identifier;
- (void)setIdentifier:(unsigned int)arg1;
- (id)timestamp;
- (id)initWithData:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setCritical:(BOOL)arg1;
- (void)setPayloadFormat:(int)arg1;
- (id)initWithTopic:(id)arg1 userInfo:(id)arg2;
- (void)setTopic:(id)arg1;
- (id)topic;
- (id)userInfo;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)dealloc;
- (void)setTimedOut:(BOOL)arg1;

@end
