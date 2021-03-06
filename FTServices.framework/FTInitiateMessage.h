/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSArray, NSString, NSData, NSDictionary, NSNumber;

@interface FTInitiateMessage : FTFaceTimeMessage <NSCopying> {
    NSData *_selfBlob;
    NSData *_selfPushToken;
    NSNumber *_selfNATType;
    NSData *_selfNatIP;
    NSArray *_peers;
    NSString *_aliasUserID;
    NSData *_aliasSignature;
    NSArray *_canonicalizedPeers;
    NSDictionary *_regionInformation;
}

@property(copy) NSData * selfBlob;
@property(copy) NSData * selfPushToken;
@property(copy) NSNumber * selfNATType;
@property(copy) NSData * selfNatIP;
@property(copy) NSString * aliasUserID;
@property(copy) NSData * aliasSignature;
@property(copy) NSDictionary * regionInformation;
@property(copy) NSArray * peers;
@property(copy) NSArray * canonicalizedPeers;


- (id)messageBody;
- (id)selfBlob;
- (void)setSelfBlob:(id)arg1;
- (id)peers;
- (void)setPeers:(id)arg1;
- (void)setRegionInformation:(id)arg1;
- (id)canonicalizedPeers;
- (void)setAliasSignature:(id)arg1;
- (void)setAliasUserID:(id)arg1;
- (void)setSelfNatIP:(id)arg1;
- (void)setSelfNATType:(id)arg1;
- (void)setSelfPushToken:(id)arg1;
- (void)setCanonicalizedPeers:(id)arg1;
- (id)selfNATType;
- (id)selfNatIP;
- (id)selfPushToken;
- (id)regionInformation;
- (id)aliasSignature;
- (id)aliasUserID;
- (void)handleResponseDictionary:(id)arg1;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)additionalMessageHeaders;
- (id)requiredKeys;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (id)bagKey;

@end
