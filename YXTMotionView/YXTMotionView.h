//
//  YXTMotionView.h
//  YXTMotionViewDemo
//
//  Created by Hanton on 7/16/15.
//  Copyright (c) 2015 Hanton. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol CRMotionViewDelegate;

@interface YXTMotionView : UIView

@property (nonatomic, assign) id <CRMotionViewDelegate> delegate;

@property (nonatomic, strong) UIImage  *image;
@property (nonatomic, strong) UIView   *contentView;
@property (nonatomic, assign, getter = isMotionEnabled) BOOL motionEnabled;
@property (nonatomic, assign, getter = isScrollIndicatorEnabled) BOOL scrollIndicatorEnabled;
@property (nonatomic, assign, getter = isZoomEnabled) BOOL zoomEnabled;
@property (nonatomic, assign, getter = isScrollDragEnabled) BOOL scrollDragEnabled;
@property (nonatomic, assign, getter = isScrollBounceEnabled) BOOL scrollBounceEnabled;


- (instancetype)initWithFrame:(CGRect)frame image:(UIImage *)image;
- (instancetype)initWithFrame:(CGRect)frame contentView:(UIView *)contentView;

@end

@protocol CRMotionViewDelegate <NSObject>

- (void)scrollViewDidScrollToOffset:(CGPoint)offset;

@end
