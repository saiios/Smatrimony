//
//  Messages.h
//  Smatrimony
//
//  Created by INDOBYTES on 16/02/17.
//  Copyright © 2017 Indobytes. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "msg_vc.h"
#import "PageCollectionViewCell.h"
#import "searchPopupVIew.h"
#import "JMOTableViewCell.h"
#import "PageViewController.h"
#import "msg_send.h"


@interface Messages : UIViewController<searchTableViewDelegate,UICollectionViewDelegate,UICollectionViewDataSource,UIPageViewControllerDelegate,UIPageViewControllerDataSource,UIScrollViewDelegate,profileTable>
{
    NSArray *sent_ary;
    int presentIndex;
    UIView *cellSelectionBar;
    NSIndexPath *path;
    NSUserDefaults *user_inf;
    NSArray *tabsArray;
}
- (IBAction)back_click:(id)sender;
- (IBAction)compose_click:(id)sender;
-(void)reply_click:(id)sender;
@property (strong, nonatomic) UIPageViewController      *pageController;
@property (strong, nonatomic) IBOutlet UIView *profileTableBgView;
@property (strong, nonatomic) IBOutlet UICollectionView *tabsView;
- (IBAction)compose_click:(id)sender;

@end