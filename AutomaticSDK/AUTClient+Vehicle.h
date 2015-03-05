//
//  AUTClient+Vehicle.h
//  AutomaticSDK
//
//  Created by Robert Böhnke on 10/03/15.
//  Copyright (c) 2015 Automatic Labs. All rights reserved.
//

#import <AutomaticSDK/AutomaticSDK.h>

#pragma clang assume_nonnull begin

@class AFHTTPRequestOperation;

@interface AUTClient (Vehicle)

/**
 *  Fetches the vehicles for the currently authenticated user.
 *
 *  @param success A block object to be invoked with the results if the request
 *                 succeeds.
 *  @param failure A block object to be invoked with an error if the request
 *                 fails.
 *
 *  @return An `AFHTTPRequestOperation` representing the request.
 */
- (AFHTTPRequestOperation *)fetchVehiclesForCurrentUserWithSuccess:(void(^ __aut_nullable)(__aut_nullable NSDictionary *))success failure:(void(^ __aut_nullable)(__aut_nullable NSError *))failure;

/**
 *  Fetches the vehicles belonging to the user with the given ID.
 *
 *  @param userID  The ID of the user whose vehicles you are interested in. This
 *                 argument must not be nil.
 *  @param success A block object to be invoked with the results if the request
 *                 succeeds.
 *  @param failure A block object to be invoked with an error if the request
 *                 fails.
 *
 *  @return An `AFHTTPRequestOperation` representing the request.
 */
- (AFHTTPRequestOperation *)fetchVehiclesForUserWithID:(NSString *)userID success:(void(^ __aut_nullable)(__aut_nullable NSDictionary *))success failure:(void(^ __aut_nullable)(__aut_nullable NSError *))failure;

/**
 *  Fetches a vehicles with a given ID.
 *
 *  @param vehicleID The ID of the trip you are interested in. This argument
 *                   must not be nil.
 *  @param success   A block object to be invoked with the results if the
 *                   request succeeds.
 *  @param failure   A block object to be invoked with an error if the request
 *                   fails.
 *
 *  @return An `AFHTTPRequestOperation` representing the request.
 */
- (AFHTTPRequestOperation *)fetchVehicleWithID:(NSString *)vehicleID success:(void(^ __aut_nullable)(__aut_nullable NSDictionary *))success failure:(void(^ __aut_nullable)(__aut_nullable NSError *))failure;

@end

#pragma clang assume_nonnull end
