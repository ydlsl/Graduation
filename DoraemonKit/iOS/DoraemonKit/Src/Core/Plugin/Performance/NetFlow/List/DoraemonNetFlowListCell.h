//
//  DoraemonNetFlowListCell.h
//  DoraemonKit-DoraemonKit
//
//  Created by didi on 2020/3/17.
//

#import <UIKit/UIKit.h>
#import "DoraemonNetFlowHttpModel.h"

@interface DoraemonNetFlowListCell : UITableViewCell

- (void)renderCellWithModel:(DoraemonNetFlowHttpModel *)httpModel;

+ (CGFloat)cellHeightWithModel:(DoraemonNetFlowHttpModel *)httpModel;

@end
