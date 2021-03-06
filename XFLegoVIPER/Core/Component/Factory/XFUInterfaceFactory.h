//
//  XFUInterfaceFactory.h
//  XFLegoVIPER
//
//  Created by 付星 on 2016/10/5.
//  Copyright © 2016年 yizzuide. All rights reserved.
//

#import <UIKit/UIKit.h>

// 根据组件名获取一个子组件的视图
#define XF_SubUInterface_(componentName) [XFUInterfaceFactory createSubUInterfaceFromComponentName:componentName parentUInterface:self]

#define XF_SubUInterface_URL(urlComponent) [XFUInterfaceFactory createSubUInterfaceFromURLComponent:urlComponent parentUInterface:self]

@interface XFUInterfaceFactory : NSObject

/**
 *  通过组件名创建子组件视图
 *  @param componetName     组件名
 *  @param parentUInterface 父视图
 *
 *  @return VIPER视图
 */
+ (__kindof UIViewController *)createSubUInterfaceFromComponentName:(NSString *)componetName parentUInterface:(__kindof UIViewController *)parentUInterface;


/**
 *   通过URL创建子组件视图
 *
 *  @param url              URL
 *  @param parentUInterface 父视图 (模块组件必传，控制器组件可选)
 *
 *  @return 子视图
 */
+ (__kindof UIViewController *)createSubUInterfaceFromURLComponent:(NSString *)url parentUInterface:(__kindof UIViewController *)parentUInterface;

/**
 *  重新构建父子视图关系链
 *
 *  @param subUserInterfaces   所有子视图
 *  @param parentUserInterface 父视图
 */
+ (void)resetSubUserInterfaces:(NSArray *)subUserInterfaces forParentActivity:(__kindof UIViewController *)parentUserInterface;
@end
