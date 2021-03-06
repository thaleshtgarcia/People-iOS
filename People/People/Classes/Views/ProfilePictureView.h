//
//  ProfilePictureView.h
//  People
//
//  Created by Bruno Koga on 9/9/13.
//  Copyright (c) 2013 CI&T. All rights reserved.
//

#import "BKXibView.h"

@interface ProfilePictureView : BKXibView

@property (nonatomic, strong) UIImage *image;

- (void)hideFavoritos:(BOOL)hide;

- (void)animateCornerRadiusFromFrame:(CGRect)fromFrame
                             toFrame:(CGRect)toFrame
                            duration:(NSTimeInterval)duration;

@end
