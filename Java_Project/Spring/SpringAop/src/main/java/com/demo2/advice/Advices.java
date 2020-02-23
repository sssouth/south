package com.demo2.advice;

import org.aspectj.lang.ProceedingJoinPoint;
import org.aspectj.lang.annotation.*;
import org.springframework.stereotype.Component;

@Component("advices")
@Aspect//表示该类是一个通知类
public class Advices {
    @Pointcut("execution(* com.demo2.service.*.*(..))")
    public void exe(){}
    /**
     * 前置方法
     */
    @Before("exe()")
    public void before() {
        System.out.println("before方法执行了...");
    }

    /**
     * 后置方法
     */
    @After("exe()")
    public void after() {
        System.out.println("after方法执行了...");
    }

    /**
     * 异常方法
     */
    @AfterThrowing("exe()")
    public void afterThrowing() {
        System.out.println("afterThrowing方法执行了...");
    }

    /**
     * 最终方法
     */
    @AfterReturning("exe()")
    public void afterReturning() {
        System.out.println("afterReturning方法执行了...");
    }

    //@Around("exe()")
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
