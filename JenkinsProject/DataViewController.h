//
//  DataViewController.h
//  JenkinsProject
//
//  Created by wujunyang on 2016/11/9.
//  Copyright © 2016年 wujunyang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CDV.h"

@interface DataViewController : CDVViewController

@property (strong, nonatomic) IBOutlet UILabel *dataLabel;
@property (strong, nonatomic) id dataObject;

@end

