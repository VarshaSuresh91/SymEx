package com.symtest.expression;

public interface IBinaryExpression extends IExpression {
	public IExpression getLHS();
	public IExpression getRHS();
}
