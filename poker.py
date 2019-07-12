
def straight(ranks):
    if len(set(ranks))==5 and (max(ranks)-min(ranks) == 4):
        return True
    return False


def flush(suits):
    if len(set(suits)) == 1:
        return True
    return False


def kind(n, ranks):
    for r in ranks:
        if ranks.count(r) == n:
            return r
    return None


def two_pair(ranks):
    hicard = kind(2, ranks)
    locard = kind(2, list(reversed(ranks)))

    if hicard != locard:
        return (hicard, locard)
    return None


def card_ranks(hand):
   card_value = ['--23456789TJQK'.index(r) for r, s in hand]
   card_value.sort(reverse = True)
   return card_value


def card_suits(hand):
    return [s for r, s in hand]

#
# print(straight(ranks))
# print(flush(suits))
# print(kind(3, k))
# print(two_pair(k))


def poker(hands):
    return max(hands, key=hand_rank)


def hand_rank(hand):
    ranks = card_ranks(hand)
    suits = card_suits(hand)

    if straight(ranks) and flush(suits):
        return (8, max(ranks))
    elif kind(4,ranks):
        return (7, kind(4,ranks), kind(1, ranks))


if __name__ == '__main__':
    assert (straight([6, 5, 2, 1, 6]) == False)
