//
//  UIScrollView+TLLoadMoreFooter.h
//  TLChat
//
//  Created by 李伯坤 on 2017/7/21.
//  Copyright © 2017年 李伯坤. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIScrollView (TLLoadMoreFooter)

- (void)tt_addLoadMoreFooterWithAction:(void (^)())loadMoreAction;
- (void)tt_beginLoadMore;
- (void)tt_endLoadMore;
- (void)tt_endLoadMoreWithNoMoreData;
- (void)tt_removeLoadMoreFooter;

@end
