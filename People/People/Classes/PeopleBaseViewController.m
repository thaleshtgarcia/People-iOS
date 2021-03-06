//
//  PeopleBaseViewController.m
//  People
//
//  Created by Bruno Koga on 7/18/13.
//  Copyright (c) 2013 CI&T. All rights reserved.
//

#import "PeopleBaseViewController.h"

@interface PeopleBaseViewController ()

@end

@implementation PeopleBaseViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
    [self adjustUIElements];
    [self adjustColors];
    [self adjustFonts];
    [self adjustLocalizationItems];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)adjustUIElements
{
    //overriden
}

- (void)adjustLocalizationItems
{
    //overriden    
}

- (void)adjustFonts
{
    //overriden
}

- (void)adjustColors
{
    //overriden    
}

- (void)performTransitionWithSegueIdentifier:(NSString *)identifier
                                  completion:(void (^)(void))completion
{
    //overriden
}

- (UIStatusBarStyle)preferredStatusBarStyle
{
    return UIStatusBarStyleLightContent;
}

@end
