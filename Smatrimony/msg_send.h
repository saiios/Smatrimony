//
//  msg_send.h
//  Smatrimony
//
//  Created by INDOBYTES on 10/03/17.
//  Copyright © 2017 Indobytes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "STParsing.h"
#import "CRToastView.h"
#import "Feedback_cell.h"
@interface msg_send : UIViewController<UITextViewDelegate,UITextFieldDelegate,UITableViewDelegate,UITableViewDataSource>
{
    NSString *matri_id,*gender,*From_email;
    NSDictionary *composeProfiles;
    NSMutableArray *id_ary;
}
- (IBAction)back_click:(id)sender;
- (IBAction)send_click:(id)sender;
@property (strong, nonatomic) IBOutlet UITextView *txt_view;
@property (strong, nonatomic) IBOutlet UITextField *subject;
@property (strong, nonatomic) IBOutlet UITextField *to;
@property (strong, nonatomic) IBOutlet UITableView *id_table;

@end
