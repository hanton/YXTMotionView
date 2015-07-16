//
//  ViewController.m
//  YXTMotionViewDemo
//
//  Created by Hanton on 7/16/15.
//  Copyright (c) 2015 Hanton. All rights reserved.
//

#import "ViewController.h"
#import "YXTMotionView.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];
  // Do any additional setup after loading the view, typically from a nib.
  
  YXTMotionView *motionView = [[YXTMotionView alloc] initWithFrame:self.view.bounds];
  [motionView setMotionEnabled:YES];
  [motionView setScrollIndicatorEnabled:NO];
  [motionView setZoomEnabled:NO];
  [motionView setScrollDragEnabled:NO];
  [motionView setScrollBounceEnabled:NO];
  UIImageView *imageView = [[UIImageView alloc] initWithImage:[UIImage imageNamed:@"Night Sky"]];
  [motionView setContentView:imageView];
  [self.view addSubview:motionView];
  [self.view sendSubviewToBack:motionView];
}

- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
  // Dispose of any resources that can be recreated.
}

@end
