# https://www.asciiart.eu/animals/cats

from dav_tools import argument_parser

def img_to_str(filename):
    with open(filename) as i:
        lines = i.readlines();
        rows = len(lines)
        cols = len(lines[0]) - 1

        print('{:<6}  {:<6}'.format(rows, cols))
        for line in lines:
            for c in line[:cols]:
                print('{:3}'.format(ord(c)), sep='', end=' ')
            print()


if __name__ == '__main__':
    argument_parser.set_developer_info('Davide Ponzini', 'davide.ponzini95@gmail.com')
    argument_parser.set_description('Convert an ASCII image to its integer representation.')
    argument_parser.add_argument('filename')

    img_to_str(argument_parser.args.filename)
    