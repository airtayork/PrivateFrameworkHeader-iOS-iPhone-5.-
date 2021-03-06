/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class NSString;

@interface ADParameter : PBCodable  {
    NSString *_key;
    NSString *_value;
}

@property(retain) NSString * key;
@property(retain) NSString * value;


- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (void)setKey:(id)arg1;
- (id)key;
- (id)dictionaryRepresentation;
- (id)value;
- (void)setValue:(id)arg1;
- (id)description;
- (void)dealloc;

@end
