//
//  SomeObjcClass.h
//  ObjCBridgeHeader
//
//  Created by Goutham Meesala on 4/22/21.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SomeObjcClass : NSObject

@property (nonatomic, assign) int someValue;

- (void)logValue: (int)value;

@end

NS_ASSUME_NONNULL_END
