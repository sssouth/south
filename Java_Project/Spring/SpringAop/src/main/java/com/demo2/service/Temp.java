package com.demo2.service;

import org.springframework.stereotype.Component;

@Component("temp")
public class Temp {
    public void save() {
        System.out.println("save方法执行了...");
    }
    public void update() {
        System.out.println("update方法执行了...");
    }
    public void delete() {
        System.out.println("delete方法执行了...");
    }
}
