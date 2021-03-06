//
//  MDAEventDataContainer.m
//
//
//  Created by Karl Monaghan on 17/02/2014.
//  Copyright (c) 2014 Crayons and Brown Paper. All rights reserved.
//

#import "MDAEventDataContainer.h"

#import "MDAEvent.h"

@implementation MDAEventDataContainer

+ (instancetype)initFromDictionary:(NSDictionary *)aDictionary
{
    MDAEventDataContainer *instance = [[MDAEventDataContainer alloc] init];
    [instance setAttributesFromDictionary:aDictionary];
    return instance;
}

- (void)setValue:(id)value forKey:(NSString *)key
{
    if ([key isEqualToString:@"results"]) {
        if ([value isKindOfClass:[NSArray class]]) {
            NSMutableArray *myMembers = [NSMutableArray arrayWithCapacity:[value count]];
            for (id valueMember in value) {
                MDAEvent *populatedMember = [MDAEvent initFromDictionary:valueMember];
                [myMembers addObject:populatedMember];
            }
            
            self.results = myMembers;
        }
    } else {
        [super setValue:value forKey:key];
    }
}

@end
