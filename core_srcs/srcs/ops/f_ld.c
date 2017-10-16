/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f_ld.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbarbier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/03 18:17:05 by cbarbier          #+#    #+#             */
/*   Updated: 2017/09/21 18:02:49 by agiulian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

int		f_ld(t_vm *vm, t_proc *proc)
{
	int	val;
	int	i_reg;

	if (!is_reg(proc->param[1]))
		return (0);
	i_reg = proc->param[1] - 1;
	if (!get_param_value(vm, proc, 0, &val))
		return (0);
	//if (proc->ptype[0] == T_IND)
	//	val = getnbytes(vm, proc->pc + m0d(val, IDX_MOD), 4, 0);
	proc->reg[i_reg] = val;
	proc->carry = !proc->reg[i_reg];
	if (vm->verbose & 4)
		ft_printf("P %4d | ld %d r%d\n", proc->id, val, i_reg + 1);
	return (1);
}
