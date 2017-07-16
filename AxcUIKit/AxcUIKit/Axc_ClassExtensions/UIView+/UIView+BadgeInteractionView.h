//
//  UIView+AxcBadgeView.h
//  AxcUIKit
//
//  Created by Axc on 2017/7/14.
//  Copyright © 2017年 Axc_5324. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "AxcUI_BadgeInteractionView.h"

@interface UIView (BadgeInteractionView)

@property(nonatomic,strong)AxcUI_BadgeInteractionView *AxcUI_BadgeInteractionView;

@property(nonatomic, assign)CGPoint axcUI_badgeInteractionPoint;

@property(nonatomic, strong)NSString *axcUI_badgeInteractionText;






@end