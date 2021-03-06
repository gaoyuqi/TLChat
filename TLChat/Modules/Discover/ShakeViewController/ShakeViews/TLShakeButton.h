//
//  TLShakeButton.h
//  TLChat
//
//  Created by 李伯坤 on 16/2/22.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, TLShakeButtonType) {
    TLShakeButtonTypePeople,
    TLShakeButtonTypeSong,
    TLShakeButtonTypeTV,
};

@interface TLShakeButton : UIButton

@property (nonatomic, strong) NSString *title;

@property (nonatomic, strong) NSString *iconPath;

@property (nonatomic, strong) NSString *iconHLPath;

@property (nonatomic, assign) TLShakeButtonType type;

@property (nonatomic, assign) NSUInteger msgNumber;

- (id)initWithType:(TLShakeButtonType)type title:(NSString *)title iconPath:(NSString *)iconPath iconHLPath:(NSString *)iconHLPath;

@end
