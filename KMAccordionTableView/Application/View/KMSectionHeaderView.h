//
//  KMSectionHeaderView.h
//  KMAccordionTableView
//
//  Created by Klevison Matias on 5/1/14.
//
//

#import <UIKit/UIKit.h>

@class KMSectionHeaderView;

@protocol KMSectionHeaderViewDelegate <NSObject>

@optional
- (void)sectionHeaderView:(KMSectionHeaderView *)sectionHeaderView sectionOpened:(NSInteger)section;

- (void)sectionHeaderView:(KMSectionHeaderView *)sectionHeaderView sectionClosed:(NSInteger)section;

@end

@interface KMSectionHeaderView : UITableViewHeaderFooterView

@property(nonatomic, weak) IBOutlet UILabel *titleLabel;
@property(nonatomic, weak) IBOutlet UIButton *disclosureButton;
@property(nonatomic, weak) IBOutlet id <KMSectionHeaderViewDelegate> delegate;
@property(nonatomic, strong) UIFont *headerFont;
@property(nonatomic, strong) UIColor *headerTitleColor;
@property(nonatomic, strong) UIColor *headerColor;
@property(nonatomic, strong) UIColor *headerSeparatorColor;
@property(weak, nonatomic) IBOutlet UIView *headerSeparatorView;
@property(nonatomic, strong) UIImage *headerDisclosureButtonImage;
@property(nonatomic) NSInteger section;

- (void)toggleOpenWithUserAction:(BOOL)userAction;

@end
