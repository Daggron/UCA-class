
def straight(ranks):
    if len(set(ranks))==5 and (max(ranks)-min(ranks)==4):
        return True
    return False


ranks = [4, 5, 6, 7, 8]
suits = ['H', 'H', 'H', 'H', 'H']

k = ['1', '2', '2', '8', '8']


def flush(suits):
    if len(set(suits)) == 1:
        return True
    return False


def kind(n, rank):
    for r in rank:
        if rank.count(r) == n:
            return r
    return None


def two_pair(el):
    hicard = kind(2, el)
    locard = kind(2, reversed(el))

    if hicard != locard:
        return (hicard, locard)
    return None


print(straight(ranks))
print(flush(suits))
print(kind(3,k))
print(two_pair(k))