//
//  CBPStoryViewController.h
//  Marvel API
//
//  Created by Karl Monaghan on 23/02/2014.
//  Copyright (c) 2014 Crayons and Brown Paper. All rights reserved.
//

#import "CBPTableViewController.h"

@class MDAStorySummary;

@interface CBPStoryViewController : CBPTableViewController
- (id)initWithStorySummary:(MDAStorySummary *)storySummary;
@end
