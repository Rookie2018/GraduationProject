//
//  DetailNewsTopView.h
//  毕业
//
//  Created by 吴添培的黑苹果 on 2017/10/22.
//  Copyright © 2017年 吴添培. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailNewsTopView : UIView
+(instancetype)getDetailNewsTopView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UILabel *authorLabel;
@property (weak, nonatomic) IBOutlet UILabel *timerLabel;


@end
