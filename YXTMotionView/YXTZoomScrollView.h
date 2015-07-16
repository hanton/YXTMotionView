//
//  YXTZoomScrollView.h
//  YXTMotionViewDemo
//
//  Created by Hanton on 7/16/15.
//  Copyright (c) 2015 Hanton. All rights reserved.
//


@protocol CRZoomScrollViewDelegate;

#import <UIKit/UIKit.h>

@interface YXTZoomScrollView : UIScrollView

@property (nonatomic, assign) id <CRZoomScrollViewDelegate> zoomDelegate;

/**
 *  image
 *
 *  The image zoomable
 */
@property (nonatomic) UIImage *image;


/**
 *  startOffset
 *
 *  The offset position from where to start and dismiss the zoom view for seamless transition
 */
@property CGPoint startOffset;


/**
 *  Custom init method to work with the motion view or any scrollView
 *
 *  @param scrollView The reference scrollView for transition animation
 *  @param image      The image to display
 *
 *  @return An instance of CRZoomScrollView
 */
- (id)initFromScrollView:(UIScrollView *)scrollView withImage:(UIImage *)image;

@end


@protocol CRZoomScrollViewDelegate <NSObject>

@optional
/**
 *  Delegate method to handle when view will be dismissed
 *
 *  @param zoomScrollView An instance of CRZoomScrollView - Optional
 */
- (void)zoomScrollViewWillDismiss:(YXTZoomScrollView *)zoomScrollView;

/**
 *  Delegate method to handle when view has been dismissed
 *
 *  @param zoomScrollView An instance of CRZoomScrollView - Optional
 */
- (void)zoomScrollViewDidDismiss:(YXTZoomScrollView *)zoomScrollView;

@end
