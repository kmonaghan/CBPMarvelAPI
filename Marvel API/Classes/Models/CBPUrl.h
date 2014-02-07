//
//  CBPUrl.h
//  
//
//  Created by Karl Monaghan on 07/02/2014.
//  Copyright (c) 2014 Crayons and Brown Paper. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CBPUrl : NSObject

@property (nonatomic, strong) NSString *type;
@property (nonatomic, strong) NSString *url;


+ (CBPUrl *)instanceFromDictionary:(NSDictionary *)aDictionary;
- (void)setAttributesFromDictionary:(NSDictionary *)aDictionary;

@end
