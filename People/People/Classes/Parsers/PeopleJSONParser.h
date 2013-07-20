//
//  PeopleJSONParse.h
//  People
//
//  Created by Bruno Koga on 7/18/13.
//  Copyright (c) 2013 CI&T. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PeopleColaborador+PopulateFromServiceResponse.h"

@interface PeopleJSONParser : NSObject

- (NSArray *)colaboradoresArrayFromSearchResponseDictionary:(NSDictionary *)responseDictionary;
- (PeopleColaborador *)colaboradorFromProfileResponseDictionary:(NSDictionary *)responseDictionary;

@end
