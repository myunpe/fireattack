//
//  TitleScene.cpp
//  Tetris
//
//  Created by Yoshida Mitsunobu on 2014/07/26.
//
//

#include "TitleScene.h"

USING_NS_CC;

Scene* TitleScene::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = TitleScene::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}


// on "init" you need to initialize your instance
bool TitleScene::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !Layer::init() )
    {
        return false;
    }
    
    Size visibleSize = Director::getInstance()->getVisibleSize();
    Vec2 origin = Director::getInstance()->getVisibleOrigin();
    
    Sprite* bg = Sprite::create();
    bg->setTextureRect(Rect(0, 0, visibleSize.width, visibleSize.height));
    bg->setColor(Color3B::GRAY);
    bg->setAnchorPoint(Vec2(0.0f, 0.0f));
    addChild(bg, -1);
    
    Label* label = Label::createWithSystemFont("TitleScene", "", 30.0f);
    label->setPosition(Vec2(visibleSize.width / 2, visibleSize.height / 2));
    addChild(label);
    
    
    
    return true;
}

