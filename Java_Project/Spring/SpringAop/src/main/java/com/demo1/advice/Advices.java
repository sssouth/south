package com.demo1.advice;

import org.aspectj.lang.ProceedingJoinPoint;

public class Advices {
    /**
     * 前置方法
     */
    public void before() {
        System.out.println("before方法执行了...");
    }

    /**
     * 后置方法
     */
    public void after() {
        System.out.println("after方法执行了...");
    }

    /**
     * 异常方法
     */
    public void afterThrowing() {
        System.out.println("afterThrowing方法执行了...");
    }

    /**
     * 最终方法
     */
    public void afterReturning() {
        System.out.println("afterReturning方法执行了...");
    }

    public Object around(ProceedingJoinPoint pjp) {
        try {
            System.out.println("around方法执行了...前置");
            Object returnValue = null;
            Object[] args = pjp.getArgs();   //得到 proceed()方法的参数
            returnValue = pjp.proceed(args); //proceed()方法表示切入点方法的执行
            System.out.println("around方法执行了...后置");
            return returnValue;
        } catch (Throwable t) {
            System.out.println("around方法执行了...异常");
            throw new RuntimeException(t);
        } finally {
            System.out.println("around方法执行了...最终");
        }
    }
}
