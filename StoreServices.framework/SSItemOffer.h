/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSSet, SSItem, SSDialog, SSItemMedia, NSString, NSMutableDictionary, NSArray;

@interface SSItemOffer : NSObject <NSCopying> {
    SSItem *_item;
    NSMutableDictionary *_offerDictionary;
    NSString *_offerIdentifier;
    NSArray *_supportedDevices;
}

@property(readonly) NSString * offerIdentifier;
@property(readonly) NSString * buyParameters;
@property(readonly) NSString * priceDisplay;
@property(readonly) NSString * actionDisplayName;
@property(getter=isOneTapOffer,readonly) BOOL oneTapOffer;
@property(getter=isPreorder,readonly) BOOL preorder;
@property(readonly) SSItemMedia * offerMedia;
@property(readonly) SSDialog * confirmationDialog;
@property(readonly) SSDialog * successDialog;
@property(readonly) NSArray * supportedDevices;
@property(readonly) NSSet * accountIdentifiers;
@property(readonly) NSString * actionType;
@property(readonly) long long estimatedDiskSpaceNeeded;
@property(readonly) id requiredSoftwareCapabilities;
@property(readonly) BOOL shouldShowPlusIcon;
@property(getter=_offerItem,setter=_setOfferItem:) SSItem * _offerItem;

+ (id)_preferredOfferIdentifiers;

- (id)priceDisplay;
- (id)_offerItem;
- (long long)estimatedDiskSpaceNeeded;
- (id)accountIdentifiers;
- (id)supportedDevices;
- (void)_setOfferItem:(id)arg1;
- (id)successDialog;
- (id)confirmationDialog;
- (BOOL)isPreorder;
- (id)valueForProperty:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isOneTapOffer;
- (id)actionDisplayName;
- (BOOL)shouldShowPlusIcon;
- (id)requiredSoftwareCapabilities;
- (id)initWithOfferIdentifier:(id)arg1 dictionary:(id)arg2;
- (id)offerIdentifier;
- (id)playableMedia;
- (id)allowedToneStyles;
- (id)buyParameters;
- (id)documentUTI;
- (id)offerMedia;
- (id)documentRequiredHandlers;
- (id)documentCannotOpenDialog;
- (id)actionType;
- (void)setOneTapOffer:(BOOL)arg1;
- (void)setActionDisplayName:(id)arg1;
- (void)setPriceDisplay:(id)arg1;
- (void)setBuyParameters:(id)arg1;

@end