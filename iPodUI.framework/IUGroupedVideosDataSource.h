/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@class MPMediaQuery;

@interface IUGroupedVideosDataSource : IUMediaQueriesDataSource  {
    MPMediaQuery *_moviesQuery;
    MPMediaQuery *_musicVideosQuery;
    MPMediaQuery *_rentalsQuery;
    MPMediaQuery *_tvShowsQuery;
    MPMediaQuery *_videoPodcastsQuery;
    MPMediaQuery *_iTunesUQuery;
}

+ (Class)cellConfigurationClassForSongs;
+ (int)mediaEntityType;
+ (id)tabBarItemTitleKey;
+ (id)tabBarItemIconName;

- (void)reloadData;
- (void)reloadQueriesEntities;
- (void)reloadSectionInfo;
- (void)reloadDataWithCompletionHandler:(id)arg1;
- (BOOL)isRestorableNavigationPathNode;
- (id)_copyQueryWithMediaType:(int)arg1 groupingProperty:(int)arg2;
- (id)_iTunesUQuery;
- (id)_videoPodcastsQuery;
- (id)_musicVideosQuery;
- (id)_tvShowsQuery;
- (id)_moviesQuery;
- (id)_rentalsQuery;
- (unsigned int)_groupingThresholdForQuery:(id)arg1;
- (void)_reloadQueries;
- (BOOL)_showSharedLibrariesActionRow;
- (BOOL)canDeleteIndex:(unsigned int)arg1;
- (void)_rentalInfoChangedNotification:(id)arg1;
- (id)entitiesForQuery:(id)arg1;
- (id)createNoContentDataSource;
- (void)createGlobalContexts;
- (void)setQueries:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (BOOL)allowsDeletion;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (id)viewControllerContextForMediaQuery:(id)arg1;
- (void)reloadActionRows;
- (BOOL)hasActionRowsEvenWhenNoOtherRowsExist;
- (id)init;
- (void)dealloc;

@end
