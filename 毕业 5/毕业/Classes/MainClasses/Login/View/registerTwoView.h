//
//  registerTwoView.h
//  毕业
//
//  Created by 吴添培的黑苹果 on 2017/10/24.
//  Copyright © 2017年 吴添培. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface registerTwoView : UIView
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UIButton *button;

+(instancetype)getRegisterTwoView;

@end
