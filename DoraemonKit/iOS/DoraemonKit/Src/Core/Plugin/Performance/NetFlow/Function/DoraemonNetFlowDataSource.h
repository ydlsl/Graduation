//
//  DoraemonNetFlowDataSource.h
//  Aspects
//
//  Created by didi on 2020/3/15.
//

#import <Foundation/Foundation.h>
#import "DoraemonNetFlowHttpModel.h"

@interface DoraemonNetFlowDataSource : NSObject

@property (nonatomic, strong) NSMutableArray<DoraemonNetFlowHttpModel *> *httpModelArray;

+ (DoraemonNetFlowDataSource *)shareInstance;

- (void)addHttpModel:(DoraemonNetFlowHttpModel *)httpModel;

- (void)clear;

@end
