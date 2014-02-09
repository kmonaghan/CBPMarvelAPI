//
//  MDAComicDate.h
//  
//
//  Created by Karl Monaghan on 07/02/2014.
//  Copyright (c) 2014 Crayons and Brown Paper. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MDAComicDate : NSObject

@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSString *type;


+ (MDAComicDate *)instanceFromDictionary:(NSDictionary *)aDictionary;
- (void)setAttributesFromDictionary:(NSDictionary *)aDictionary;

- (NSDictionary *)dictionaryRepresentation;

@end