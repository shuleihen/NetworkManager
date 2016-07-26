//
//  NetworkManager.h
//  RmbWithdraw
//
//  Created by zdy on 16/7/25.
//  Copyright © 2016年 lianlian. All rights reserved.
//

#import <AFNetworking/AFNetworking.h>

@interface NetworkManager : NSObject
- (id)initWithBaseUrl:(NSString *)baseUrl;

- (NSURLSessionDataTask *)GET:(NSString *)URLString
                   parameters:(id)parameters
                   completion:(void (^)(id data, NSError *error))completion;

- (NSURLSessionDataTask *)POST:(NSString *)URLString
                    parameters:(id)parameters
                    completion:(void (^)(id data, NSError *error))completion;
@end

extern NSString *API_HOST;
