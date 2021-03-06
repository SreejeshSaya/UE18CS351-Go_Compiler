import sys
fin = open("ICG.txt")
fout = open("QUAD.txt", 'w')
quad_list = []
vars_seen = set()
sys.stdout = fout	
for icg in fin.readlines():
	icg = icg[:-1]
	operands = icg.split()
	op = "NULL"
	a1 = "NULL"
	a2 = "NULL"
	res = "NULL"
	
	
	if 'goto' not in operands:
		if len(operands) == 1:
			#must be label:
			op = 'Label'
			res = operands[0][:-1]

		if len(operands) == 3:
			#unary opr

			#simple assign like x = y
			if '-' not in operands[2]:
				if operands[0][0] != 't' and operands[0] not in vars_seen:
					vars_seen.add(operands[0])
					print("int", operands[0], "NULL", "NULL")
				op = '='
				res = operands[0]
				a1 = operands[2]
			else:
				#assignment of -ve of rhs like x = -y
				if operands[0][0] != 't' and operands[0] not in vars_seen:
					vars_seen.add(operands[0])
					print("int", operands[0], "NULL", "NULL")
				op = '-'
				res = operands[0]
				a1 = operands[2]

		elif len(operands) == 5:
			#binary opr like a = b * 5
			if operands[0][0] != 't' and operands[0] not in vars_seen:
				vars_seen.add(operands[0])
				print("int", operands[0], "NULL", "NULL")
			op = operands[3]
			a1 = operands[2]
			a2 = operands[4]
			res = operands[0]


	else:

		#uncond branch
		if len(operands) == 2:
			op = "goto"
			res = operands[1]

		#cond branch if x goto l
		elif len(operands) == 4:
			op = "if"
			a1 = operands[1]
			res = operands[3]

		#if false t1 goto l
		elif len(operands) == 5:
			op = "ifFalse"
			a1 = operands[1]
			res = operands[3]

	print(op, a1, a2, res)
	quad_list.append((op, a1, a2, res))

fin.close()
fout.close()