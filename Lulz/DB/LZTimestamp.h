//
//  LZTimestamp.h
//  Lulz
//
//  Created by Dmitry Sobolev on 08/11/14.
//  Copyright (c) 2014 Dmitry Sobolev. All rights reserved.
//

#import <Realm/Realm.h>

@interface LZTimestamp : RLMObject

@property (nonatomic, strong) NSDate *timestamp;

@end

// This protocol enables typed collections. i.e.:
// RLMArray<LZTimestamp>
RLM_ARRAY_TYPE(Timestamp)
