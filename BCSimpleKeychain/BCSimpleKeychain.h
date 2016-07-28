//
//  BCSimpleKeychain.h
//  BCSimpleKeychain
//
//  Created by Jaydeep.Patoliya on 27/07/16.
//  Copyright © 2016 Jaydeep_OPUS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Security/Security.h>

extern NSString *const BCKeychainPassword;
extern NSString *const BCKeychainUsername;
extern NSString *const BCKeychainIdentifier;
extern NSString *const BCKeychainService;
extern NSString *const BCKeychainExpirationDate;
extern NSString *const BCKeychainInfo;

@interface BCSimpleKeychain : NSObject {
    
}

+ (id)defaultKeychain;

// Creates new item with the provided values and deletes the old ones if those existed.
// Returns YES on success and NO on failure.
- (BOOL)storeUsername:(NSString *)username password:(NSString *)password identifier:(NSString *)identifier forService:(NSString *)service;
- (BOOL)storeUsername:(NSString *)username password:(NSString *)password identifier:(NSString *)identifier info:(NSDictionary *)info forService:(NSString *)service;

- (BOOL)storeUsername:(NSString *)username password:(NSString *)password identifier:(NSString *)identifier expirationDate:(NSDate *)expirationDate forService:(NSString *)service;


// On success returns a dictionary with the following keys:
//  BCKeychainUsername
//  BCKeychainPassword
//  BCKeychainIdentifier
//  BCKeychainService
//  BCKeychainExpirationDate
- (NSDictionary *)credentialsForIdentifier:(NSString *)identifier service:(NSString *)service;

// On success returns a dictionary with the following keys:
//  BCKeychainUsername
//  BCKeychainPassword
//  BCKeychainIdentifier
//  BCKeychainService
//  BCKeychainExpirationDate
- (NSDictionary *)credentialsForUsername:(NSString *)username service:(NSString *)service;

// On success returns an array of dictionaries with the following keys:
//  BCKeychainUsername
//  BCKeychainPassword
//  BCKeychainIdentifier
//  BCKeychainService
//  BCKeychainExpirationDate
//
// limit - the amount of entries to return. Should be > 0
- (NSArray *)allCredentialsForService:(NSString *)service limit:(NSUInteger)limit;

// Deletes credentials matching the provided identifier and service, returns YES on sucess
- (BOOL)deleteCredentialsForIdentifier:(NSString *)identifier service:(NSString *)service;

// Deletes credentials matching the provided username and service, returns YES on sucess
- (BOOL)deleteCredentialsForUsername:(NSString *)username service:(NSString *)service;

// Deletes all entries for the given service
- (BOOL)deleteAllCredentialsForService:(NSString *)service;

@end
