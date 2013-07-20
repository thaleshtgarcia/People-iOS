//
//  PeopleInitialViewController.h
//  People
//
//  Created by Bruno Koga on 7/18/13.
//  Copyright (c) 2013 CI&T. All rights reserved.
//

#import "PeopleBaseViewController.h"

@interface PeopleInitialViewController : PeopleBaseViewController

- (void)performInitialAnimationTransitioningToViewController:(UIViewController *)destinationViewController
                                              withIdentifier:(NSString *)identifier;

@end
