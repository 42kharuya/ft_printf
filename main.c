/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 03:20:28 by kharuya           #+#    #+#             */
/*   Updated: 2024/11/13 21:30:12 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int main(void)
{
    int result;

    // テスト1: 文字出力
    result = ft_printf("Character test: %c\n", 'A');
    printf("Printed characters: %d\n\n", result);

    // テスト2: 文字列出力
    result = ft_printf("String test: %s\n", "Hello, World!");
    printf("Printed characters: %d\n\n", result);

    // テスト3: ポインタ出力
    int num = 42;
    result = ft_printf("Pointer test: %p\n", &num);
    printf("Printed characters: %d\n\n", result);

    // テスト4: 整数出力
    result = ft_printf("Integer test: %d, Negative test: %i\n", 123, -456);
    printf("Printed characters: %d\n\n", result);

    // テスト5: 符号なし整数出力
    result = ft_printf("Unsigned test: %u\n", 123456789U);
    printf("Printed characters: %d\n\n", result);

    // テスト6: 16進数出力（小文字と大文字）
    result = ft_printf("Hex test (lowercase): %x, Hex test (uppercase): %X\n", 255, 255);
    printf("Printed characters: %d\n\n", result);

    // テスト7: パーセント文字の出力
    result = ft_printf("Percent test: %%\n");
    printf("Printed characters: %d\n\n", result);

    return 0;
}