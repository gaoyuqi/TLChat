//
//  TLConversationAngel.h
//  TLChat
//
//  Created by 李伯坤 on 2017/12/26.
//  Copyright © 2017年 李伯坤. All rights reserved.
//

#import <ZZFlexibleLayoutFramework/ZZFlexibleLayoutFramework.h>

typedef NS_ENUM(NSInteger, TLConversationSectionTag) {
    TLConversationSectionTagAlert,
    TLConversationSectionTagTopArticle,
    TLConversationSectionTagPlay,
    TLConversationSectionTagTopConversation,
    TLConversationSectionTagConv,
};

typedef NS_ENUM(NSInteger, TLConversationCellTag) {
    TLConversationCellTagNoNet,
};


@interface TLConversationAngel : ZZFLEXAngel <
    UITableViewDelegate
>

@end
