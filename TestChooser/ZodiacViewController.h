//
//  ZodiacViewController.h
//  TestChooser
//
//  Created by Jiantao Li on 28/03/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZodiacViewController : UIViewController<UIPickerViewDelegate, UIPickerViewDataSource>{
    IBOutlet UIPickerView *orderTypePicker;
    
    NSMutableArray *orderTypes;
}

@property (nonatomic, retain) IBOutlet UIPickerView *orderTypePicker;

@end
