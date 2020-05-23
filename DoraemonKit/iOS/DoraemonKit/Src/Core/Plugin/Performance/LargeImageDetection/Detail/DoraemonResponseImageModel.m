//
//  DoraemonResponseImageModel.m
//  DoraemonKit
//
//  Created by didi on 2020/2/21.
//

#import "DoraemonResponseImageModel.h"
#import "DoraemonUrlUtil.h"

@implementation DoraemonResponseImageModel
- (instancetype)initWithResponse: (NSURLResponse *)response data:(NSData *) data {
    
    self = [[DoraemonResponseImageModel alloc] init];
    self.url = response.URL;
    self.data = data;
    int64_t byte = [DoraemonUrlUtil getResponseLength:(NSHTTPURLResponse *)response data:data];
    self.size = [NSByteCountFormatter stringFromByteCount: byte countStyle: NSByteCountFormatterCountStyleBinary];
    return self;
}
@end
